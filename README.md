dmenu - dynamic menu
====================
dmenu is an efficient dynamic menu for X.


## 1. Requirements
In order to build dmenu you need the Xlib header files.


## 2. Installation
### 2.1. Edition.
Edit config.mk to match your local setup (dmenu is installed into
the /usr/local namespace by default).

Edit the `config.h` file which should be a duplicate of [`config.def.h`] at the beginning.

### 2.2. Patching.
One can add patches to one's build of `dmenu`. I created a [`patches`] directory with all the patches I use.
To install a new patch, one could for instance run:

    cd /path/to/dmenu/source
    curl https://tools.suckless.org/dmenu/patches/<patch_name>/<diff_name>.diff patches
    patch -p1 < patches/<diff_name>.diff

### 2.3. Troubleshooting.
One might need to correct a few patch errors that pop whent compiling the source code, e.g. when diffs conflict, there might be a constant missing inside the `config.h` file.  
Simply do what the compiler says and it should be just fine!

### 2.4. Compiling.
Afterwards enter the following command to build and install dmenu
(if necessary as root):

    make clean install


## 3. Running dmenu
See the man page for details.

## 4. Contributing
If you want to contribute to this rice of `dmenu`, feel free to open a pull request to open a discussion about new features.  
If you want to use this patched version of `dmenu`, you can fork the repo, clone it and add either my fork as upstream or the original `dmenu` repo to stay updated with the base source code, or both.

    git clone git@github.com:<username>/dmenu.git
    git remote add upstream git@github.com:a2n-s/dmenu.git
    git remote add source git://git.suckless.org/dmenu
    git fetch upstream main
    git fetch source master

[`config.def.h`]: config.def.h
