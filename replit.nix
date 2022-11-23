{ pkgs }: {
	deps = [
		pkgs.azure-functions-core-tools
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}