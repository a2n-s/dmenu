# Patches for my fork of suckless dmenu.

## List of urls.

The below urls are marked with a tick when properly installed.  
The patches marked with `~` are installed in the sense that the code should be present, but do not work indeed.  
Patches have been patched with `patch -p1 < ./path/to/patch`.

|   | patch url            | patch diff                                                         |
|---|----------------------|--------------------------------------------------------------------|
|   | [allow-color-font]   |                                                                    |
|   | [alpha]              | [dmenu-alpha-20210605-1a13d04.diff]                                |
|   | [bidi]               |                                                                    |
| x | [border]             | [dmenu-border-4.9.diff] [dmenu-borderoption-20200217-bf60a1e.diff] |
|   | [case-insensitive]   |                                                                    |
| x | [center]             | [dmenu-center-20200111-8cd37e1.diff]                               |
|   | [dracula]            |                                                                    |
|   | [dynamicoptions]     |                                                                    |
|   | [emoji-highlight]    |                                                                    |
| x | [fuzzyhighlight]     | [dmenu-fuzzyhighlight-4.9.diff]                                    |
| x | [fuzzymatch]         | [dmenu-fuzzymatch-4.9.diff]                                        |
| x | [grid]               | [dmenu-grid-4.9.diff]                                              |
| ~ | [gridnav]            | [dmenu-gridnav-5.0.diff]                                           |
|   | [gruvbox]            |                                                                    |
|   | [highlight]          |                                                                    |
|   | [highpriority]       |                                                                    |
|   | [incremental]        |                                                                    |
|   | [initialtext]        |                                                                    |
|   | [instant]            |                                                                    |
|   | [json]               |                                                                    |
| x | [line-height]        | [dmenu-lineheight-5.0.diff]                                        |
|   | [lines-below-prompt] |                                                                    |
|   | [listfullwidth]      |                                                                    |
|   | [managed]            |                                                                    |
| x | [morecolor]          | [dmenu-morecolor-20190922-4bf895b.diff]                            |
| x | [mouse-support]      | [dmenu-mousesupport-5.0.diff]                                      |
|   | [multi-selection]    |                                                                    |
|   | [navhistory]         |                                                                    |
|   | [no-sort]            |                                                                    |
|   | [non_blocking_stdin] |                                                                    |
| x | [numbers]            | [dmenu-numbers-4.9.diff]                                           |
|   | [password]           |                                                                    |
|   | [pipeout]            |                                                                    |
|   | [prefix-completion]  |                                                                    |
|   | [preselect]          |                                                                    |
|   | [printindex]         |                                                                    |
|   | [printinputtext]     |                                                                    |
|   | [reject-no-match]    |                                                                    |
|   | [restrict-return]    |                                                                    |
|   | [scroll]             |                                                                    |
|   | [separator]          |                                                                    |
|   | [solarized]          |                                                                    |
|   | [symbols]            |                                                                    |
|   | [topbar]             |                                                                    |
|   | [tsv]                |                                                                    |
|   | [vertfull]           |                                                                    |
|   | [xresources]         |                                                                    |
|   | [xresources-alt]     |                                                                    |
| x | [xyw]                | [dmenu-xyw-5.0.diff]                                               |

<!-- all the patches at https://tools.suckless.org/dmenu/patches/ -->
[allow-color-font]:   https://tools.suckless.org/dmenu/patches/allow-color-font
[alpha]:              https://tools.suckless.org/dmenu/patches/alpha
[bidi]:               https://tools.suckless.org/dmenu/patches/bidi
[border]:             https://tools.suckless.org/dmenu/patches/border
[case-insensitive]:   https://tools.suckless.org/dmenu/patches/case-insensitive
[center]:             https://tools.suckless.org/dmenu/patches/center
[dracula]:            https://tools.suckless.org/dmenu/patches/dracula
[dynamicoptions]:     https://tools.suckless.org/dmenu/patches/dynamicoptions
[emoji-highlight]:    https://tools.suckless.org/dmenu/patches/emoji-highlight
[fuzzyhighlight]:     https://tools.suckless.org/dmenu/patches/fuzzyhighlight
[fuzzymatch]:         https://tools.suckless.org/dmenu/patches/fuzzymatch
[grid]:               https://tools.suckless.org/dmenu/patches/grid
[gridnav]:            https://tools.suckless.org/dmenu/patches/gridnav
[gruvbox]:            https://tools.suckless.org/dmenu/patches/gruvbox
[highlight]:          https://tools.suckless.org/dmenu/patches/highlight
[highpriority]:       https://tools.suckless.org/dmenu/patches/highpriority
[incremental]:        https://tools.suckless.org/dmenu/patches/incremental
[initialtext]:        https://tools.suckless.org/dmenu/patches/initialtext
[instant]:            https://tools.suckless.org/dmenu/patches/instant
[json]:               https://tools.suckless.org/dmenu/patches/json
[line-height]:        https://tools.suckless.org/dmenu/patches/line-height
[lines-below-prompt]: https://tools.suckless.org/dmenu/patches/lines-below-prompt
[listfullwidth]:      https://tools.suckless.org/dmenu/patches/listfullwidth
[managed]:            https://tools.suckless.org/dmenu/patches/managed
[morecolor]:          https://tools.suckless.org/dmenu/patches/morecolor
[mouse-support]:      https://tools.suckless.org/dmenu/patches/mouse-support
[multi-selection]:    https://tools.suckless.org/dmenu/patches/multi-selection
[navhistory]:         https://tools.suckless.org/dmenu/patches/navhistory
[no-sort]:            https://tools.suckless.org/dmenu/patches/no-sort
[non_blocking_stdin]: https://tools.suckless.org/dmenu/patches/non_blocking_stdin
[numbers]:            https://tools.suckless.org/dmenu/patches/numbers
[password]:           https://tools.suckless.org/dmenu/patches/password
[pipeout]:            https://tools.suckless.org/dmenu/patches/pipeout
[prefix-completion]:  https://tools.suckless.org/dmenu/patches/prefix-completion
[preselect]:          https://tools.suckless.org/dmenu/patches/preselect
[printindex]:         https://tools.suckless.org/dmenu/patches/printindex
[printinputtext]:     https://tools.suckless.org/dmenu/patches/printinputtext
[reject-no-match]:    https://tools.suckless.org/dmenu/patches/reject-no-match
[restrict-return]:    https://tools.suckless.org/dmenu/patches/restrict-return
[scroll]:             https://tools.suckless.org/dmenu/patches/scroll
[separator]:          https://tools.suckless.org/dmenu/patches/separator
[solarized]:          https://tools.suckless.org/dmenu/patches/solarized
[symbols]:            https://tools.suckless.org/dmenu/patches/symbols
[topbar]:             https://tools.suckless.org/dmenu/patches/topbar
[tsv]:                https://tools.suckless.org/dmenu/patches/tsv
[vertfull]:           https://tools.suckless.org/dmenu/patches/vertfull
[xresources]:         https://tools.suckless.org/dmenu/patches/xresources
[xresources-alt]:     https://tools.suckless.org/dmenu/patches/xresources-alt
[xyw]:                https://tools.suckless.org/dmenu/patches/xyw

<!-- all the downloaded diffs -->
[dmenu-alpha-20210605-1a13d04.diff]:        dmenu-alpha-20210605-1a13d04.diff
[dmenu-border-4.9.diff]:                    dmenu-border-4.9.diff
[dmenu-borderoption-20200217-bf60a1e.diff]: dmenu-borderoption-20200217-bf60a1e.diff
[dmenu-center-20200111-8cd37e1.diff]:       dmenu-center-20200111-8cd37e1.diff
[dmenu-fuzzyhighlight-4.9.diff]:            dmenu-fuzzyhighlight-4.9.diff
[dmenu-fuzzymatch-4.9.diff]:                dmenu-fuzzymatch-4.9.diff
[dmenu-grid-4.9.diff]:                      dmenu-grid-4.9.diff
[dmenu-gridnav-5.0.diff]:                   dmenu-gridnav-5.0.diff
[dmenu-lineheight-5.0.diff]:                dmenu-lineheight-5.0.diff
[dmenu-morecolor-20190922-4bf895b.diff]:    dmenu-morecolor-20190922-4bf895b.diff
[dmenu-mousesupport-5.0.diff]:              dmenu-mousesupport-5.0.diff
[dmenu-numbers-4.9.diff]:                   dmenu-numbers-4.9.diff
[dmenu-xyw-5.0.diff]:                       dmenu-xyw-5.0.diff
