#pragma once

#include "duckdb.hpp"

namespace duckdb {

void RegisterSystemFunctions(ExtensionLoader &loader);
void CreateSystemViews(Connection &con);

} // namespace duckdb
