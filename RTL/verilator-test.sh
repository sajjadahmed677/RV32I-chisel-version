#!/bin/bash

rm -rf obj_dir

verilator -Wall --cc Ibtida_top_dffram_cv.v --top-module Ibtida_top_dffram_cv --Wno-MODDUP --Wno-lint --exe --trace --build sim_main.cpp

./obj_dir/VIbtida_top_dffram_cv
