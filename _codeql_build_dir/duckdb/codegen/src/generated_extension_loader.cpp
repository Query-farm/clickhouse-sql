#include "duckdb/main/extension/generated_extension_loader.hpp"

namespace duckdb{

//! Looks through the CMake-generated list of extensions that are linked into DuckDB currently to try load <extension>
bool TryLoadLinkedExtension(DuckDB &db, const string &extension) {

  if (extension=="chsql") {
      db.LoadStaticExtension<ChsqlExtension>();
      return true;
  }
  if (extension=="core_functions") {
      db.LoadStaticExtension<CoreFunctionsExtension>();
      return true;
  }
  if (extension=="parquet") {
      db.LoadStaticExtension<ParquetExtension>();
      return true;
  }
  if (extension=="jemalloc") {
      db.LoadStaticExtension<JemallocExtension>();
      return true;
  }

    return false;
}

vector<string> LinkedExtensions(){
    vector<string> VEC = {
	"chsql",
	"core_functions",
	"parquet",
	"jemalloc"
    };
    return VEC;
}


vector<string> LoadedExtensionTestPaths(){
    vector<string> VEC = {
	"/home/runner/work/clickhouse-sql/clickhouse-sql/chsql/test/sql"
    };
    return VEC;
}

}
