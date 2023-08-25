#indef MY_ASSET_H
#define MY_ASSET_H

#include <string>

class  Assert {
public:
    Asset();
    Asset(int value,std::string
    product_type);
    std:::string
            get_product_type();
    int get_value();
    ~Assert();

private:
    int asset_value;
    std::string asset_type;
};
#endif // MY_ASSET_H