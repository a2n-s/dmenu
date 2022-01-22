static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeSel]            = { "#000000", "#B48EAD" },  // only selected item.
	[SchemeMid]            = { "#D8DEE9", "#000000" },  // side selections
	[SchemeNorm]           = { "#D8DEE9", "#2E3440" },  // general
	[SchemeSelHighlight]   = { "#A3BE8C", "#000000" },  // filtered characters selection
	[SchemeNormHighlight]  = { "#A3BE8C", "#000000" },  // filtered characters others
	[SchemeOut]            = { "#2E3440", "#88C0D0" },
};
