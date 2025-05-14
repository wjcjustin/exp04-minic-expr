///
/// @file NegUnaryInstruction.h
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
#pragma once

#include "Instruction.h"

///
/// @brief一元求负指令
///
class UnaryInstruction : public Instruction {

public:
    /// @brief 构造函数
    /// @param _op 操作符
    /// @param _result 结果操作数
    /// @param _srcVal1 取负操作数
    UnaryInstruction(Function * _func, IRInstOperator _op, Value * _srcVal, Type * _type);

    /// @brief 转换成字符串
    void toString(std::string & str) override;
};
