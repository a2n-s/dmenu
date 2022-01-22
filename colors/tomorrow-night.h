static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeSel]            = { "#000000", "#b77ee0" },  // only selected item.
	[SchemeMid]            = { "#c5c8c6", "#000000" },  // side selections
	[SchemeNorm]           = { "#c5c8c6", "#1d1f21" },  // general
	[SchemeSelHighlight]   = { "#9ec400", "#000000" },  // filtered characters selection
	[SchemeNormHighlight]  = { "#9ec400", "#000000" },  // filtered characters others
	[SchemeOut]            = { "#000000", "#54ced6" },
};
