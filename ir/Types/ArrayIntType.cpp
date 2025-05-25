///
/// @file ArrayIntType.cpp
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

#include "ArrayIntType.h"

ArrayIntType::ArrayIntType(const std::vector<uint32_t> & _dimensionalities)
    : Type(Type::ArrayTyID), dimensionalities(_dimensionalities)
{
    int num = 0;
    for (auto dim: dimensionalities) {
        if (num == 0) {
            num = dim;
        } else {
            num *= dim;
        }
    }
    this->size = num * 4;
}