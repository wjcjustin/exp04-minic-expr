///
/// @file UnaryInstruction.cpp
/// @brief 一元指令
///
/// @author weijiachao (weijiachao@mail.nwpu.edu.cn)
/// @version 1.1
/// @date 2025-05-14
///
/// @copyright Copyright (c) 2025
///
/// @par 修改日志:
/// <table>
/// <tr><th>Date       <th>Version <th>Author  <th>Description
/// <tr><td>2025-05-05 <td>1.0     <td>weijiachao  <td>新建
/// <tr><td>2025-05-14 <td>1.1     <td>weijiachao  <td>修改一元求负指令为通用一元指令
/// </table>
///
#include "UnaryInstruction.h"
#include "AST.h"
#include "Instruction.h"

/// @brief 构造函数
/// @param _op 操作符
/// @param _result 结果操作数
/// @param _srcVal1 源操作数
UnaryInstruction::UnaryInstruction(Function * _func, IRInstOperator _op, Value * _srcVal, Type * _type)
    : Instruction(_func, _op, _type)
{
    addOperand(_srcVal);
}

/// @brief 转换成字符串
/// @param str 转换后的字符串
void UnaryInstruction::toString(std::string & str)
{

    Value * src = getOperand(0);
    auto opCode = getOp();
    if (opCode == IRInstOperator::IRINST_OP_NEG_I) {
        str = getIRName() + " = neg " + src->getIRName();
    } else if (opCode == IRInstOperator::IRINST_OP_NOT) {
        str = getIRName() + " = not " + src->getIRName();
    } else if (opCode == IRInstOperator::IRINST_TMP_VALUE) {
        str = getIRName() + " = " + src->getIRName();
    } else {
        str = "Unknown UnaryInstruction";
    }
}
