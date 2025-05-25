///
/// @file ArrayIntType.h
/// @brief 整型数组类型类
///
/// @author weijiachao (weijaichao@nwpu.edu.com)
/// @version 1.0
/// @date 2025-05-23
///
/// @copyright Copyright (c) 2025
///
/// @par 修改日志:
/// <table>
/// <tr><th>Date       <th>Version <th>Author  <th>Description
/// <tr><td>2025-05023 <td>1.0     <td>weijiachao  <td>新建
/// </table>
///

#pragma once

#include <cstdint>
#include <vector>

#include "Type.h"

class ArrayIntType final : public Type {

public:
    ///
    /// @brief 获取类型的IR标识符
    /// @return std::string IR标识符void
    ///
    [[nodiscard]] std::string toString() const override
    {
        return "i32";
    }

    ///
    /// @brief 获得类型所占内存空间大小
    /// @return int32_t
    ///
    [[nodiscard]] int32_t getSize() const override
    {
        return size;
    }

private:
    ///
    /// @brief 构造函数
    /// @param _dimensionalities 数组维度数组的引用
    ///
    explicit ArrayIntType(const std::vector<uint32_t> & _dimensionalities);

    ///
    /// @brief 数组各维度的大小
    ///
    std::vector<uint32_t> dimensionalities;

    ///
    /// @brief 数组占用的空间
    ///
    uint32_t size;
};
