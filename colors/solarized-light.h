static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeSel]            = { "#ffffff", "#d33682" },  // only selected item.
	[SchemeMid]            = { "#073642", "#eee8d5" },  // side selections
	[SchemeNorm]           = { "#657b83", "#fdf6e3" },  // general
	[SchemeSelHighlight]   = { "#2aa198", "#000000" },  // filtered characters selection
	[SchemeNormHighlight]  = { "#2aa198", "#000000" },  // filtered characters others
	[SchemeOut]            = { "#ffffff", "#268bd2" },
};
