// Marvish Chandra\
// Updated Dec 2022
#include <stdio.h>

// h = per hour, m = per mile, d = day
public static void uhaul(String[] h, m){
    pickupTruck = 19.95 * h + 0.89 * m
    cargoVan = 19.95 * h + 0.89 * m
    tenft_Truck = 19.95 * h + 1.39 * m
    fifteenft_Truck = 29.95 * h + 1.39 * m 
    twentyft_Truck = 39.95 * h + 1.39 * m
    twentysixft_Truck = 39.95 * h + 1.39 * m 
    return 0;
}
public static void homedepot(String[] refuel){
    flatbead_first75 = 19 + 150 + refuel
    flatbead_daily = 129 + 150 + refuel
    flatbead_weekly = 903 + 150 + refuel
    van_first75 = 19 + 150 + refuel
    van_daily = 129 + 150 + refuel
    van_weekly = 903 + 150 + refuel
    movingtruck_first75 = 29 + 150 + refuel
    movingtruck_daily = 139 + 150 + refuel
    movingtruck_weekly = 973 + 150 + refuel
    return 0;
}
private static void penske(String[] d, m){
    vanDaily = 29.99 * d + 0.79 * m
    twelveft_truck = 29.99 * d + 0.79 * m
    sixteenft_truck = 29.99 * d + 0.79 * m
    twentysixft_truck = 299 * d + 1.29 * m 
    return 0;
}
private static void budget(String[] d, m){
    vanDaily = 19.99 * d + 0.99 * m
    twelveft_truck = 19.99 + 0.99 * m 
    sixteenft_truck = 29.99 * d + 0.99 * m 
    twentysixft_truck = 79.99 * d + 0.99 * m 
    return 0;
}
public static void enterprise(String[] d, m1, m2){
    sdpickup = 90 * d + if m1 > 600: sdpickup + 0.19 * m1 else: return sdpickup
    halftonpickup = 99 * d if m2 > 300: halftonpickup + 0.19 * m2 else: return halftonpickup
    threefourth_pickup = 70 * d if m1 > 600: threefourth_pickup + 0.19 * m1 else: return threefourth_pickup
    tonpickup = 170 * d + if m1 > 600: tonpickup + 0.19 * m1 else: return tonpickup
    
    compactVan = 49.95 * d + if m1 > 600: compactVan + 0.19 * m1 else: return compactVan
    van = 49.95 * d + if m1 > 600: van + 0.19 * m1 else: return van 
    heavydutyvan = 49.95 * d + if m1 > 600: heavydutyvan + 0.19 * m1 else: return heavydutyvan
    heavydutyXL_van = 49.95 * d + if m1 > 600: heavydutyXL_van + 0.19 * m1 else: return heavydutyXL_van
    highroofvan = 59.95 * d + if m1 > 600: highroofvan + 0.19 * m1 else: return highroofvan

    fiftenftvan = 95 * d + 0.49 * m1 
    sixteenftvan = 85 * d  + 0.23 * m1 
    sixteencabovertruck = 135 * d + 0.49 * m1 
    twentyboxtruck = 175 * d + 0.49 * m1 
    twentyfourboxtruck = 200 * d + 0.49 * m1
    twentysixboxtruck = 190 * d + 0.49 * m1

    twelvestakebed = 135 * d + 0.49 * m1 
    conventionalstakebed = 135 * d + 0.49 * m1 
    sixteenstakebed = 180 * d + 0.49 * m1 
    twentystakebed = 275 * d + 0.49 * m1 
    twentyfourstakebed = 190 * d + 0.49 * m1 
    twentysixstakebed = 190 * d + 0.49 * m1 

    flatbedgooseneck = "currently unavailable"
    onetonflatbed_gooseneck = 129.99 * d + 0.79 * m1
    return 0;
}
