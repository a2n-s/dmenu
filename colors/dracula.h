static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeSel]            = { "#000000", "#ff79c6" },  // only selected item.
	[SchemeMid]            = { "#d7d7d7", "#1c1f24" },  // side selections
	[SchemeNorm]           = { "#f8f8f2", "#282a36" },  // general
	[SchemeSelHighlight]   = { "#50fa7b", "#000000" },  // filtered characters selection
	[SchemeNormHighlight]  = { "#507a7b", "#000000" },  // filtered characters others
	[SchemeOut]            = { "#000000", "#8be9fd" },
};
