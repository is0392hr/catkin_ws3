; Auto-generated. Do not edit!


(cl:in-package control_msgs-msg)


;//! \htmlinclude GripperCommandGoal.msg.html

(cl:defclass <GripperCommandGoal> (roslisp-msg-protocol:ros-message)
  ((command
    :reader command
    :initarg :command
    :type control_msgs-msg:GripperCommand
    :initform (cl:make-instance 'control_msgs-msg:GripperCommand)))
)

(cl:defclass GripperCommandGoal (<GripperCommandGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GripperCommandGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GripperCommandGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name control_msgs-msg:<GripperCommandGoal> is deprecated: use control_msgs-msg:GripperCommandGoal instead.")))

(cl:ensure-generic-function 'command-val :lambda-list '(m))
(cl:defmethod command-val ((m <GripperCommandGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader control_msgs-msg:command-val is deprecated.  Use control_msgs-msg:command instead.")
  (command m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GripperCommandGoal>) ostream)
  "Serializes a message object of type '<GripperCommandGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'command) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GripperCommandGoal>) istream)
  "Deserializes a message object of type '<GripperCommandGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'command) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GripperCommandGoal>)))
  "Returns string type for a message object of type '<GripperCommandGoal>"
  "control_msgs/GripperCommandGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GripperCommandGoal)))
  "Returns string type for a message object of type 'GripperCommandGoal"
  "control_msgs/GripperCommandGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GripperCommandGoal>)))
  "Returns md5sum for a message object of type '<GripperCommandGoal>"
  "86fd82f4ddc48a4cb6856cfa69217e43")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GripperCommandGoal)))
  "Returns md5sum for a message object of type 'GripperCommandGoal"
  "86fd82f4ddc48a4cb6856cfa69217e43")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GripperCommandGoal>)))
  "Returns full string definition for message of type '<GripperCommandGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%GripperCommand command~%~%================================================================================~%MSG: control_msgs/GripperCommand~%float64 position~%float64 max_effort~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GripperCommandGoal)))
  "Returns full string definition for message of type 'GripperCommandGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%GripperCommand command~%~%================================================================================~%MSG: control_msgs/GripperCommand~%float64 position~%float64 max_effort~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GripperCommandGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'command))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GripperCommandGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'GripperCommandGoal
    (cl:cons ':command (command msg))
))