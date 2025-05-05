///
/// @file NegUnaryInstruction.cpp
/// @brief 一元求负指令
///
/// @author weijiachao (weijiachao@mail.nwpu.edu.cn)
/// @version 1.0
/// @date 2025-05-05
///
/// @copyright Copyright (c) 2025
///
/// @par 修改日志:
/// <table>
/// <tr><th>Date       <th>Version <th>Author  <th>Description
/// <tr><td>2025-05-05 <td>1.0     <td>weijiachao  <td>新建
/// </table>
///
#include "NegUnaryInstruction.h"

/// @brief 构造函数
/// @param _op 操作符
/// @param _result 结果操作数
/// @param _srcVal1 源操作数
NegUnaryInstruction::NegUnaryInstruction(Function * _func, Value * _srcVal, Type * _type)
    : Instruction(_func, IRInstOperator::IRINST_OP_NEG_I, _type)
{
    addOperand(_srcVal);
}

/// @brief 转换成字符串
/// @param str 转换后的字符串
void NegUnaryInstruction::toString(std::string & str)
{

    Value * src = getOperand(0);
    str = getIRName() + " = neg " + src->getIRName();
}
