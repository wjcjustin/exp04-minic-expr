///
/// @file NegUnaryInstruction.h
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
#pragma once

#include "Instruction.h"

///
/// @brief一元求负指令
///
class NegUnaryInstruction : public Instruction {

public:
    /// @brief 构造函数
    /// @param _op 操作符
    /// @param _result 结果操作数
    /// @param _srcVal1 取负操作数
    NegUnaryInstruction(Function * _func, Value * _srcVal, Type * _type);

    /// @brief 转换成字符串
    void toString(std::string & str) override;
};
