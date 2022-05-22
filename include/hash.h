// Copyright 2022 Your Name <your_email>

#ifndef TEMPLATE_HASH_H
#define TEMPLATE_HASH_H
#include <atomic>
#include <csignal>
#include <ctime>
#include <future>
#include <string>
#include "../third-party/PicoSHA2/picosha2.h"
#include <j_creator.h>
#include <logging.h>

void hash_calc(const std::string& path, size_t num_of_threads, size_t rotation);

#endif  // TEMPLATE_HASH_H
