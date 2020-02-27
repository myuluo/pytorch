
copy: fbcode/caffe2/torch/csrc/jit/frontend/ir_emitter.h
copyrev: 9ff199c0092256344f8734e51a0dfbcd37b10880

#pragma once
#include <functional>
#include <memory>
#include <string>

#include <torch/csrc/jit/ir/ir.h>
#include <torch/csrc/jit/frontend/error_report.h>
#include <torch/csrc/jit/api/module.h>
#include <torch/csrc/jit/frontend/resolver.h>
#include <torch/csrc/jit/frontend/sugared_value.h>
#include <torch/csrc/jit/frontend/tree_views.h>

namespace torch {
namespace jit {
namespace script {

TORCH_API void runCleanupPasses(std::shared_ptr<Graph>& to_clean);

TORCH_API bool meaningfulName(const std::string& name);

} // namespace script
} // namespace jit
} // namespace torch
