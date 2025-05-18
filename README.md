# 编译原理实验

源代码位置：<https://github.com/NPUCompiler/exp04-minic-expr.git>

## 快速测试和评测工具

测试源文件名默认为test1-1.c

命令如下：
```sh
/run.sh [参数]
```

说明如下：
```sh

# 不输入参数, 或者输入参数-s或-S, 默认生成汇编代码 ./tests/test1-1.s
./ run -s
# 等同于执行命令：
./build/minic -S  -A -o ./tests/test1-1.s  ./tests/test1-1.c

# 输入参数-T或-t，生成AST图，等同于执行命令
./build/minic -S  -A -o ./tests/test1-1.png -T  ./tests/test1-1.c

# 输入参数-I或-i，生成ir，等同于执行命令
./build/minic -S  -A -o ./tests/test1-1.ir -I  ./tests/test1-1.c

# 输入参数-R或-r，生成可执行文件并自动运行并返回退出码，等同于以下三行命令
arm-linux-gnueabihf-gcc -static -g -o tests/test1-1 tests/test1-1.s
qemu-arm-static tests/test1-1
echo $?

```

使用例：

```sh
./run -s	# 生成./tests/test1-1.s
./run -i	# 生成./tests/test1-1.ir
./run -t	# 生成./tests/test1-1.png
./run -R	# 根据./tests/test1-1.s产生可执行文件并运行，请确认已经生成汇编文件
```



## 实验过程

### 实验四-表达式强化

minic编译器要支持的功能：

1. 无符号整数支持 8 进制和 16 进制，八进制以 0 开头，16 进制以 0x 或 0X 开头，与 C 语言保持一致
2. 支持单目运算符求负运算-。字面量负整数需解释为一个无符号数（含0）和一个求负符号。
3. 支持乘法*、除法/、求余%运算
4. ARM32 后端支持

### 实验六-分支与循环

在实验四的基础上追加支持分支与循环语句等的识别与翻译。

主要的功能有：

1. 支持关系表达式。
2. 支持逻辑与或非表达式，主要要短路求值。
3. 整型变量可内部转换为布尔类型的值，同样布尔类型的值可转换为整型值；非0的int类型为真，否则为0；真为1，否则为0。
4. 支持if语句与if-else语句
5. 支持while语句，不要求do while语句；
6. 支持break与continue语句；
7. 分支、循环语句可嵌套；
8. 对于分支要定义三个label，真语句体的入口label，假语句体的入口label，分支的出口label；
9. 对于while循环要定义三个label，循环的入口label，循环体的入口label，循环的出口label；
10. 对于逻辑与、逻辑或操作，要短路求值，在AST遍历时可创建继承属性真出口label和假出口label；
11. 对于逻辑非，在AST遍历时可创建继承属性真出口label和假出口label，逻辑非实际上就是真假出口label翻转。
