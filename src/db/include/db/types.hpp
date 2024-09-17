#pragma once

#include <array>
#include <string>
#include <utility>
#include <variant>

namespace db {

struct PageId {
    std::string file;
    size_t page;

    bool operator==(const PageId& other) const {
        return file == other.file && page == other.page;
    }
};

constexpr size_t DEFAULT_PAGE_SIZE = 4096;

using Page = std::array<char, DEFAULT_PAGE_SIZE>;
} // namespace db

template <> struct std::hash<const db::PageId> {
  std::size_t operator()(const db::PageId &r) const {
    return std::hash<std::string>()(r.file) ^ std::hash<size_t>()(r.page);
  }
};