static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeSel]            = { "#ffffff", "#d33682" },  // only selected item.
	[SchemeMid]            = { "#eee8d5", "#000000" },  // side selections
	[SchemeNorm]           = { "#eee8d5", "#002b36" },  // general
	[SchemeSelHighlight]   = { "#2aa198", "#000000" },  // filtered characters selection
	[SchemeNormHighlight]  = { "#2aa198", "#000000" },  // filtered characters others
	[SchemeOut]            = { "#ffffff", "#268bd2" },
};
