/*
  A_SW

  BLOCK DESCRIPTION:
    The A_SW block accepts two Analog Input Field values and switches it's output 
    between the two based on the status of the control input. 
    This block is intended to mimic the action of a relay or set of switch contacts. 

  FIELD DESCRIPTION:

  A_SW:
    Output of the block will be dependent on the state of the CTRL input. 

  CTRL:
    This input determines which input value will be passed through to the output. 
    If the input is true the output equals the NO input. A false selects the output 
    to be the same as the NC input. 

  NC:
    The Normally Closed input. This is the Analog value to be used for the 
    output when the CTRL input is false. 

  NO:
    The Normally Open input. This is the Analog value to be used for the output 
    when the CTRL input is true. 

  SPECIAL INSTRUCTIONS:

  None 

  RELATED BLOCKS:

  S_SW
  A_SW_REV
  B_SW
  B_SW_REV
  I_SW 
*/

