# MiniC 编译器——实验三、四增强版

## 1. 项目简介

本项目是一个基于 MiniC 的编译器实现，在原有基础上增加了对整数运算的完整支持。编译器采用经典的三段式架构：前端(词法语法分析)、中端(中间代码生成)、后端(目标代码生成)。
MiniC 源仓库: https://github.com/NPUCompiler/exp04-minic-expr

## 2. 功能特性

### 2.1 语言特性
- 支持int类型的全局变量定义，不支持变量初始化
- 支持int类型的局部变量定义，不支持变量初始化
- 支持赋值语句，不支持连续赋值
- 支持语句块
- 支持完整的整数运算：
  - 加法运算 (+)
  - 减法运算 (-)
  - 乘法运算 (*)
  - 除法运算 (/)
  - 取余运算 (%)
  - 取负运算 (-)
- 支持带括号的复杂表达式
- 支持内置函数putint，用于输出整数值
- 支持变量重名，实现变量分层管理

### 2.2 技术特性
- 前端：使用ANTLR4实现词法分析和语法分析
- 中端：生成线性中间表示(IR)
- 后端：支持ARM32架构的汇编代码生成
- 符号表：支持作用域管理和变量查找
- 错误处理：提供详细的编译错误信息

## 3. 项目结构

```
.
├── frontend/         # 前端实现
│   └── antlr4/       # ANTLR4词法语法分析器
├── ir/               # 中间表示
├── backend/          # 后端实现
├── symboltable/      # 符号表实现
├── utils/            # 工具函数
├── tests/            # 测试用例
└── doc/              # 文档
```

## 4. 构建说明

### 4.1 环境要求
- C++17或更高版本
- CMake 3.10或更高版本
- ANTLR4运行时库
- ARM交叉编译工具链(用于生成ARM32汇编)

### 4.2 构建步骤

具体的命令如下：

```shell
# cmake根据CMakeLists.txt进行配置与检查，这里使用clang编译器并且是Debug模式
cmake -B build -S . -G Ninja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_COMPILER:FILEPATH=/usr/bin/clang++
# cmake，其中--parallel说明是并行编译，也可用-j选项
cmake --build build --parallel
```

## 5. 使用说明

### 5.1 编译命令
```bash
./minic -S [options] source_file
```

### 5.2 主要选项
- `-h, --help`: 显示帮助信息
- `-o, --output=FILE`: 指定输出文件
- `-S, --symbol`: 显示符号信息
- `-T, --ast`: 输出抽象语法树
- `-I, --ir`: 输出中间表示
- `-c, --asmir`: 在汇编输出中显示IR指令注释

## 6. 贡献指南

1. 确保你的开发环境满足[环境要求](#41-环境要求)中的所有条件
2. 克隆仓库并安装依赖：
```bash
git clone https://github.com/wjcjustin/exp04-minic-expr
cd exp04-minic-expr
```
