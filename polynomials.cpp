struct polynomial {
    int level;          // 4                                2                   4
    double* values;     // 7 + 5x + 0x^2 + 12x^3            5 + 2x              12 + 7x + .. + ...
};

polynomial add(polynomial a, polynomial b) {
    polynomial returnValue;
    if (a.level > b.level) {
        returnValue.level = a.level;
    } else {
        returnValue.level = b.level;
    }
    returnValue.values = new double[returnValue.level];
    for(int i = 0; i < returnValue.level; i++) {
        returnValue.values[i] = 0;
    }
    for(int i = 0; i < returnValue.level; i++) {
        for(int j = 0; j < a.level; j++) {
            returnValue.values[i] += a.values[j];
        }
        for(int j = 0; j < b.level; j++) {
            returnValue.values[i] += b.values[j];
        }
    }
    return returnValue;
}

polynomial subtract(polynomial a, polynomial b)
polynomial get_level(polynomial a)
polynomial get_value(polynomial a, int n)