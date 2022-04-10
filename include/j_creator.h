// Copyright 2022 siruser agamesok@gmail.com

#ifndef TEMPLATE_J_CREATOR_H
#define TEMPLATE_J_CREATOR_H
#include <ctime>
#include <fstream>
#include <mutex>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>
#include <iostream>

using json = nlohmann::json;

struct json_data{
  time_t timestamp;
  std::string hash;
  std::string data;
};

class json_creator{
 public:
  json_creator() = default;
  ~json_creator() = default;
  json_creator(const json_creator& val) = delete;
  json_creator& operator=(const json_creator& val) = delete;
  void add_item(const json_data& val);
  void save_json(const std::string& path) const;
  bool is_empty() const;

 private:
  json data;
  mutable std::mutex mut;
};
#endif  // TEMPLATE_J_CREATOR_H
