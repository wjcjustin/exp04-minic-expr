#!/bin/bash
input_file="./tests/test1-1.c"
base_name="${input_file%.c}"

# 参数检查
if [ $# -gt 1 ]; then
    echo "错误：仅支持单个参数 [-T | -I | -R | -S | -C]" >&2
    exit 1
fi

case "$1" in
    -T|-t)
        # 生成PNG流程图[2,8](@ref)
        ./build/minic -S -A -o "${base_name}.png" -T "$input_file"
        echo " @AST 成功生成"
        ;;
    -I|-i)
        # 生成中间表示IR[2,8](@ref)
        ./build/minic -S -A -o "${base_name}.ir" -I "$input_file"
        echo " @IR 成功生成"
        ;;
    -R|-r)
        # 编译、执行并输出返回值[3,7](@ref)
        arm-linux-gnueabihf-gcc -static -g -o "$base_name" "${base_name}.s" tests/std.c
        qemu-arm-static "$base_name"
        echo " @程序退出码：$?"
        ;;
    -C|-c)
        # IR解释执行
        ./IRCompiler -R "${base_name}.ir"
        echo " @程序退出码：$?"
        ;;
    -S|-s|"")
        # 默认生成汇编代码[1,2](@ref)
        ./build/minic -S -A -o "${base_name}.s" "$input_file"
        echo " @ARM32 汇编成功生成"
        ;;
    *)
        echo " @无效参数：$1, 支持参数：-T, -I, -R, -S" >&2
        exit 1
        ;;
esac