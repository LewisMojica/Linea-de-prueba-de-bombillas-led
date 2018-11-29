//////// STEPPER MOTORS CONFIG ////////
    // CONVEYOR
        #define conveyor_steps 200
        #define conveyor_pin_DIR 8
        #define conveyor_pin_STEP 9

    // PICK AND PLACE
        // X AXIS
        #define pick_and_place_X_steps 200
        #define pick_and_place_X_pin_DIR 10
        #define pick_and_place_X_pin_STEP 11
        // Y AXIS
        #define pick_and_place_Y_steps 200
        #define pick_and_place_Y_pin_DIR 12
        #define pick_and_place_Y_pin_STEP 13


///// OBSTACLE SENSOR INPUTS PINS//////
    #define obstacle_sensor_lamp0 14
    #define obstacle_sensor_lamp1 15


////////// LIMIT SWITHCES ///////////
    //TOP LIMIT
    #define limit_switch_x 16
    #define limit_switch_y 17
    //BOTTON LIMIT
    #define limit_switch_x_botton 16
    #define limit_switch_y_botton 17