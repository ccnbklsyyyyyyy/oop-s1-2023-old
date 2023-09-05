#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
public:
    Appliance(int powerRating = 0);
    virtual ~Appliance() = default;
    
    void togglePower();
    bool isOn() const;
    virtual double getPowerConsumption() const;

protected:
    int powerRating;
    bool powerOn;
};

#endif
