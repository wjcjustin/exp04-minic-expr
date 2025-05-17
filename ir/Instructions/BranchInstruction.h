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
#pragma once

#include <string>

#include "Instruction.h"
#include "LabelInstruction.h"
#include "Function.h"

///
/// @brief 条件跳转指令
///
class BranchInstruction final : public Instruction {

public:
    ///
    /// @brief 条件跳转指令的构造函数
    /// @param target 跳转目标
    ///
    BranchInstruction(Function * _func, Value * _cond, Instruction * _target1, Instruction * _target2);

    /// @brief 转换成字符串
    void toString(std::string & str) override;

    ///
    /// @brief 获取目标Label1指令
    /// @return LabelInstruction*
    ///
    [[nodiscard]] LabelInstruction * getTarget1() const;

    ///
    /// @brief 获取目标Label2指令
    /// @return LabelInstruction*
    ///
    [[nodiscard]] LabelInstruction * getTarget2() const;

    ///
    /// @brief 获取条件Value
    /// @return Value*
    ///
    [[nodiscard]] Value * getCondValue() const;

private:
    ///
    /// @brief 跳转到的目标Label指令
    ///
    LabelInstruction *target1, *target2;

    ///
    /// @brief 跳转判断条件 Value
    ///
    Value * cond;
};
