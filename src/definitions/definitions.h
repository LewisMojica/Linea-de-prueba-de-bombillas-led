//////// STEPPER MOTORS CONFIG ////////
    // CONVEYOR
        #define conveyor_steps (200 * 16)
        #define conveyor_pin_DIR 5
        #define conveyor_pin_STEP 6
        #define conveyor_RPM (20)

    // PICK AND PLACE
        // X AXIS
        #define pick_x_steps_to_trash (1700 * pick_and_place_X_uStepping)

        #define pick_and_place_X_uStepping 8
        #define pick_and_place_X_steps (200 * pick_and_place_X_uStepping) //pasos para una revolucion

        #define pick_and_place_X_pin_DIR 32
        #define pick_and_place_X_pin_STEP 30
        #define limit_switch_x 3


        #define pick_and_place_X_standard_RPM (200)
        #define pick_and_place_X_calibration_RPM 100

        #define pick_and_place_X_normal_pos (180 * pick_and_place_X_uStepping)
        // #define pick_and_place_X_test_pos (180 * pick_and_place_X_uStepping)

        

        // Y AXIS
        #define pick_y_steps_to_trash (1000 * pick_and_place_X_uStepping)

        #define pick_and_place_Y_uStepping 16
        #define pick_and_place_Y_steps (200 * pick_and_place_Y_uStepping)
        
        #define pick_and_place_Y_pin_DIR 25
        #define pick_and_place_Y_pin_STEP 27
        #define limit_switch_y 2

        #define pick_and_place_Y_standard_RPM 250
        #define pick_and_place_Y_calibration_RPM 100
        
        #define pick_and_place_Y_normal_pos (1700 * pick_and_place_Y_uStepping)
        #define pick_and_place_Y_test_pos (180 * pick_and_place_Y_uStepping)

        #define secure_pos_y (150 * pick_and_place_X_uStepping)
        #define pick_and_place_Y_push_pos (2020 * pick_and_place_Y_uStepping)


///// OBSTACLE SENSOR INPUTS PINS//////
    #define obstacle_sensor_lamp0 38
    #define obstacle_sensor_lamp1 36
    #define obstacle_sensor_end 40
    #define obstacle_sensor_end2 39


////////// SUCTION CUPS ///////////
    #define suction_lamp_0 15
    #define suction_lamp_1 14


////////// lux meters ////////

    #define lux_lamp_0 48
    #define lux_lamp_1 46

    
    #define button 8