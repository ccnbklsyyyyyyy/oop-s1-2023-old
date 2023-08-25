#indef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H

# include <string>

class AssetPortfolio{
private:
    int max_assets;
    int num_assets;
    class Asset {
    public:
        std:::string product_type;
    };
    Asset*assets;

public:
    AssetPortfolio();
    AssetPortfolio(int size);
    ~AssetPortfolio();

    int get_num assets();
    bool has_asset(std::string product;
    Asset*get_assets();
    bool add_asset(Asset new_asset);
};
#endif