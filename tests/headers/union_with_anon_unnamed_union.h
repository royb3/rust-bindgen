// bindgen-flags: --with-derive-hash
//
union foo {
    unsigned int a;
    union {
        unsigned short b;
        unsigned char c;
    };
};
