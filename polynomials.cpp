struct polynomial {
    int level;          // 4               +                2                   6
    double* values;     // 7 + 5x + 0x^2 + 12x^3            5 + 2x              x^4 
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

polynomial subtract(polynomial a, polynomial b) {
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
            returnValue.values[i] -= b.values[j];
        }
    }
    return returnValue;
}

polynomial multiply(polynomial a, polynomial b) {
    polynomial returnValue;
    returnValue.level = a.level + b.level - 1;
    returnValue.values = new double[returnValue.level];
    for(int i = 0; i < returnValue.level; i++) {
        returnValue.values[i] = 0;
    }
    for(int i = 0; i < a.level; i++) {
        for(int i = 0; i < b.level; i++) {
            
        }
    }
}

int get_level(polynomial a)
double get_value(polynomial a, int n)