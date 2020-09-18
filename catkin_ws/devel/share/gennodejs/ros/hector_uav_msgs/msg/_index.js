
"use strict";

let HeadingCommand = require('./HeadingCommand.js');
let HeightCommand = require('./HeightCommand.js');
let MotorStatus = require('./MotorStatus.js');
let Altimeter = require('./Altimeter.js');
let ThrustCommand = require('./ThrustCommand.js');
let RC = require('./RC.js');
let RawRC = require('./RawRC.js');
let MotorCommand = require('./MotorCommand.js');
let AttitudeCommand = require('./AttitudeCommand.js');
let Compass = require('./Compass.js');
let MotorPWM = require('./MotorPWM.js');
let RawImu = require('./RawImu.js');
let VelocityXYCommand = require('./VelocityXYCommand.js');
let PositionXYCommand = require('./PositionXYCommand.js');
let ServoCommand = require('./ServoCommand.js');
let RawMagnetic = require('./RawMagnetic.js');
let ControllerState = require('./ControllerState.js');
let VelocityZCommand = require('./VelocityZCommand.js');
let RuddersCommand = require('./RuddersCommand.js');
let Supply = require('./Supply.js');
let YawrateCommand = require('./YawrateCommand.js');
let PoseActionFeedback = require('./PoseActionFeedback.js');
let LandingGoal = require('./LandingGoal.js');
let PoseResult = require('./PoseResult.js');
let PoseAction = require('./PoseAction.js');
let TakeoffActionGoal = require('./TakeoffActionGoal.js');
let LandingFeedback = require('./LandingFeedback.js');
let TakeoffActionResult = require('./TakeoffActionResult.js');
let PoseActionGoal = require('./PoseActionGoal.js');
let LandingActionFeedback = require('./LandingActionFeedback.js');
let TakeoffFeedback = require('./TakeoffFeedback.js');
let PoseGoal = require('./PoseGoal.js');
let TakeoffAction = require('./TakeoffAction.js');
let TakeoffGoal = require('./TakeoffGoal.js');
let LandingActionResult = require('./LandingActionResult.js');
let LandingAction = require('./LandingAction.js');
let TakeoffActionFeedback = require('./TakeoffActionFeedback.js');
let LandingActionGoal = require('./LandingActionGoal.js');
let LandingResult = require('./LandingResult.js');
let PoseActionResult = require('./PoseActionResult.js');
let TakeoffResult = require('./TakeoffResult.js');
let PoseFeedback = require('./PoseFeedback.js');

module.exports = {
  HeadingCommand: HeadingCommand,
  HeightCommand: HeightCommand,
  MotorStatus: MotorStatus,
  Altimeter: Altimeter,
  ThrustCommand: ThrustCommand,
  RC: RC,
  RawRC: RawRC,
  MotorCommand: MotorCommand,
  AttitudeCommand: AttitudeCommand,
  Compass: Compass,
  MotorPWM: MotorPWM,
  RawImu: RawImu,
  VelocityXYCommand: VelocityXYCommand,
  PositionXYCommand: PositionXYCommand,
  ServoCommand: ServoCommand,
  RawMagnetic: RawMagnetic,
  ControllerState: ControllerState,
  VelocityZCommand: VelocityZCommand,
  RuddersCommand: RuddersCommand,
  Supply: Supply,
  YawrateCommand: YawrateCommand,
  PoseActionFeedback: PoseActionFeedback,
  LandingGoal: LandingGoal,
  PoseResult: PoseResult,
  PoseAction: PoseAction,
  TakeoffActionGoal: TakeoffActionGoal,
  LandingFeedback: LandingFeedback,
  TakeoffActionResult: TakeoffActionResult,
  PoseActionGoal: PoseActionGoal,
  LandingActionFeedback: LandingActionFeedback,
  TakeoffFeedback: TakeoffFeedback,
  PoseGoal: PoseGoal,
  TakeoffAction: TakeoffAction,
  TakeoffGoal: TakeoffGoal,
  LandingActionResult: LandingActionResult,
  LandingAction: LandingAction,
  TakeoffActionFeedback: TakeoffActionFeedback,
  LandingActionGoal: LandingActionGoal,
  LandingResult: LandingResult,
  PoseActionResult: PoseActionResult,
  TakeoffResult: TakeoffResult,
  PoseFeedback: PoseFeedback,
};
