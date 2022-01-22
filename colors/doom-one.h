static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeSel]            = { "#1c1f24", "#c678dd" },  // only selected item.
	[SchemeMid]            = { "#d7d7d7", "#1c1f24" },  // side selections
	[SchemeNorm]           = { "#cccccc", "#282c34" },  // general
	[SchemeSelHighlight]   = { "#98be65", "#000000" },  // filtered characters selection
	[SchemeNormHighlight]  = { "#98be65", "#000000" },  // filtered characters others
	[SchemeOut]            = { "#000000", "#51afef" },
};
