//////// STEPPER MOTORS CONFIG ////////
    // CONVEYOR
        #define conveyor_steps 200
        #define conveyor_pin_DIR 48
        #define conveyor_pin_STEP 14

    // PICK AND PLACE
        // X AXIS
        #define pick_and_place_X_calibration_STEP 16
        #define pick_and_place_X_steps (200 * pick_and_place_X_calibration_STEP)
        #define pick_and_place_X_pin_DIR 2
        #define pick_and_place_X_pin_STEP 3
        #define pick_and_place_X_standard_RPM (250)
        #define pick_and_place_X_calibration_RPM 100
        #define pick_and_place_X_calibration_steps (3200 * pick_and_place_X_calibration_STEP)
        #define pick_and_place_X_test_pos (500 * pick_and_place_X_calibration_STEP)

        // Y AXIS
        #define pick_and_place_X_calibration_RPM_STEP 16
        #define pick_and_place_Y_steps (200 * pick_and_place_X_calibration_RPM_STEP)
        #define pick_and_place_Y_pin_DIR 13
        #define pick_and_place_Y_pin_STEP 12
        #define pick_and_place_Y_standard_RPM 250
        #define pick_and_place_Y_calibration_RPM (100)
        #define pick_and_place_Y_calibration_steps (50 * qpick_and_place_X_calibration_RPM_STEP)
        #define pick_and_place_Y_test_pos (30 * pick_and_place_X_calibration_RPM_STEP)


///// OBSTACLE SENSOR INPUTS PINS//////
    #define obstacle_sensor_lamp0 17
    #define obstacle_sensor_lamp1 17
    #define obstacle_sensor_end 15


////////// LIMIT SWITHCES ///////////
    //TOP LIMIT
    #define limit_switch_x 4
    #define limit_switch_y 5
    
    