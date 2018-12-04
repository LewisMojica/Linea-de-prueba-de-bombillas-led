//////// STEPPER MOTORS CONFIG ////////
    // CONVEYOR
        #define conveyor_steps 200
        #define conveyor_pin_DIR 48
        #define conveyor_pin_STEP 14

    // PICK AND PLACE
        // X AXIS
        #define pick_and_place_X_steps (200 * 16)
        #define pick_and_place_X_pin_DIR 2
        #define pick_and_place_X_pin_STEP 3
        #define pick_and_place_X_pin_ENABLE 4
        #define pick_and_place_X_standard_RPM 250
        #define pick_and_place_X_calibration_RPM 100
        #define pick_and_place_X_calibration_steps (3200 * 16)
        // Y AXIS
        #define pick_and_place_Y_steps 200
        #define pick_and_place_Y_pin_DIR 12
        #define pick_and_place_Y_pin_STEP 13
        #define pick_and_place_Y_pin_ENABLE 30
        #define pick_and_place_Y_calibration_RPM 100
        #define pick_and_place_Y_calibration_steps 50


///// OBSTACLE SENSOR INPUTS PINS//////
    #define obstacle_sensor_lamp0 14
    #define obstacle_sensor_lamp1 15


////////// LIMIT SWITHCES ///////////
    //TOP LIMIT
    #define limit_switch_x 12
    #define limit_switch_y 17
    
    