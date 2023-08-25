#include "Asset.h"

Asset::Asset():asset_va;ue(0),
asset_type(""){}

Asset::Asset(int value,
             std::string product_type):
asset_value(value),
asset_type(product_type){}

std::string
Asset::get_product_type(){
    return asset_type;
}

int Asset::get_value(){
    return asset_value
}

Asset::~Asset(){

}