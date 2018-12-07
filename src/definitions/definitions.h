//////// STEPPER MOTORS CONFIG ////////
    // CONVEYOR
        #define conveyor_steps 200
        #define conveyor_pin_DIR 48
        #define conveyor_pin_STEP 14

    // PICK AND PLACE
        // X AXIS
        #define pick_x_steps_to_trash (1700 * pick_and_place_X_uStepping)

        #define pick_and_place_X_uStepping 16
        #define pick_and_place_X_steps (200 * pick_and_place_X_uStepping) //pasos para una revolucion

        #define pick_and_place_X_pin_DIR 2
        #define pick_and_place_X_pin_STEP 3
        #define limit_switch_x 4


        #define pick_and_place_X_standard_RPM (100)
        #define pick_and_place_X_calibration_RPM 100

        #define pick_and_place_X_calibration_steps (180 * pick_and_place_X_uStepping)
        // #define pick_and_place_X_test_pos (180 * pick_and_place_X_uStepping)

        // Y AXIS
        #define pick_y_steps_to_trash (1000 * pick_and_place_X_uStepping)

        #define pick_and_place_Y_uStepping 16
        #define pick_and_place_Y_steps (200 * pick_and_place_Y_uStepping)
        
        #define pick_and_place_Y_pin_DIR 13
        #define pick_and_place_Y_pin_STEP 12
        #define limit_switch_y 8

        #define pick_and_place_Y_standard_RPM 100
        #define pick_and_place_Y_calibration_RPM 50
        
        #define pick_and_place_Y_calibration_steps (920 * pick_and_place_Y_uStepping)
        #define pick_and_place_Y_test_pos (180 * pick_and_place_Y_uStepping)


///// OBSTACLE SENSOR INPUTS PINS//////
    #define obstacle_sensor_lamp0 17
    #define obstacle_sensor_lamp1 17
    #define obstacle_sensor_end 15


////////// SUCTION CUPS ///////////
    #define suction_lamp_0 17
    #define suction_lamp_1 17


////////// lux meters ////////

    #define lux_lamp_0 17
    #define lux_lamp_1 17

    
    