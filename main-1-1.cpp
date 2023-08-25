#include<iostream>
#include "Asset.h"

int main(){
    Asset defaultAsset;
    std::cout << "Default asset type: "<<
    defaultAsset.get_value() << ", Value: "<<
    std::endl;

    Asset customAsset(1500,"Bonds");
    std::cout << "Custom asset type :"<<
    customAsset.get_product_type() << " , Value :"<<customAsset.get_value() <<
    std::endl;
    return 0;
}