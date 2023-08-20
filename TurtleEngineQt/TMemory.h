#pragma once

#include <memory>

template <typename T>
using Sp = std::shared_ptr<T>;

template <typename T, typename... Args>
std::shared_ptr<T> Share(Args&&... args) {
    return std::make_shared<T>(std::forward<Args>(args)...);
}

template <typename T>
using Up = std::unique_ptr<T>;

template <typename T, typename... Args>
std::unique_ptr<T> CreateUnique(Args&&... args) {
    return std::make_unique<T>(std::forward<Args>(args)...);
}




