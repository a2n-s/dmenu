static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeSel]            = { "#000000", "#c594c5" },  // only selected item.
	[SchemeMid]            = { "#d8dee9", "#000000" },  // side selections
	[SchemeNorm]           = { "#d8dee9", "#1b2b34" },  // general
	[SchemeSelHighlight]   = { "#99C794", "#000000" },  // filtered characters selection
	[SchemeNormHighlight]  = { "#99C794", "#000000" },  // filtered characters others
	[SchemeOut]            = { "#ffffff", "#6699cc" },
};
