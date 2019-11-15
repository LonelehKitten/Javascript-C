#ifndef STDJS_H
#define STDJS_H

typedef struct Type {
    const int INT;
    const int CHAR;
    const int FLOAT;
    const int DOUBLE;
    const int STRING;
    const int ARRAY;
} Type;

Type type = {
    .INT = 2,
    .CHAR = 3
};

#endif /* STDJS_H */