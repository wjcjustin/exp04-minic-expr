///
/// @file BranchInstruction.h
/// @brief 条件跳转指令 即br指令
///
/// @author weijiachao (weijiachao@nwpu.edu.cn)
/// @version 1.0
/// @date 2025-05-14
///
/// @copyright Copyright (c) 2025
///
/// @par 修改日志:
/// <table>
/// <tr><th>Date       <th>Version <th>Author  <th>Description
/// <tr><td>2025-05-14 <td>1.0     <td>weijiachao  <td>新建
/// </table>
///

#include "Instruction.h"
#include "VoidType.h"

#include "BranchInstruction.h"

///
/// @brief 无条件跳转指令的构造函数
/// @param target 跳转目标
///
BranchInstruction::BranchInstruction(Function * _func, Value * _cond, Instruction * _target1, Instruction * _target2)
    : Instruction(_func, IRInstOperator::IRINST_OP_BRANCH, VoidType::getType())
{
    target1 = static_cast<LabelInstruction *>(_target1);
    target2 = static_cast<LabelInstruction *>(_target2);
    cond = _cond;
}

/// @brief 转换成IR指令文本
void BranchInstruction::toString(std::string & str)
{
    str = "bc " + cond->getIRName() + ", label " + target1->getIRName() + ", label " + target2->getIRName();
}

///
/// @brief 获取目标Label1指令
/// @return LabelInstruction* label1指令
///
LabelInstruction * BranchInstruction::getTarget1() const
{
    return target1;
}

///
/// @brief 获取目标Label2指令
/// @return LabelInstruction* label2指令
///
LabelInstruction * BranchInstruction::getTarget2() const
{
    return target2;
}

///
/// @brief 获取条件Value
/// @return Value*
///
Value * BranchInstruction::getCondValue() const
{
    return cond;
}
