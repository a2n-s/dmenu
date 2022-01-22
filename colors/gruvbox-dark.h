static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeSel]            = { "#000000", "#b16286" },  // only selected item.
	[SchemeMid]            = { "#ebdbb2", "#1c1f24" },  // side selections
	[SchemeNorm]           = { "#ebdbb2", "#282828" },  // general
	[SchemeSelHighlight]   = { "#689d6a", "#000000" },  // filtered characters selection
	[SchemeNormHighlight]  = { "#689d6a", "#000000" },  // filtered characters others
	[SchemeOut]            = { "#ffffff", "#458588" },
};
