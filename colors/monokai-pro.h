static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeSel]            = { "#000000", "#ab9df2" },  // only selected item.
	[SchemeMid]            = { "#fcfcfa", "#000000" },  // side selections
	[SchemeNorm]           = { "#fcfcfa", "#2d2a2e" },  // general
	[SchemeSelHighlight]   = { "#a9dc76", "#000000" },  // filtered characters selection
	[SchemeNormHighlight]  = { "#a9dc76", "#000000" },  // filtered characters others
	[SchemeOut]            = { "#ff2a2e", "#78dce8" },
};
