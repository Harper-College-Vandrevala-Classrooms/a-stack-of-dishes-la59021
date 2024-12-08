#pragma once
#include <string>


class Dish {
  public:
    Dish() {
        this->description = "NULL";
    }
    Dish(std::string description) {
      this->description = description;
    }
    std::string get_description() {
      return this->description;
    }

    private:
        std::string description;
};
