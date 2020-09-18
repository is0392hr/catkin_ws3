## *********************************************************
##
## File autogenerated for the control_toolbox package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'name': 'Default', 'type': '', 'state': True, 'cstate': 'true', 'id': 0, 'parent': 0, 'parameters': [{'name': 'p', 'type': 'double', 'default': 10.0, 'level': 1, 'description': 'Proportional gain.', 'min': -100000.0, 'max': 100000.0, 'srcline': 291, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'double', 'cconsttype': 'const double'}, {'name': 'i', 'type': 'double', 'default': 0.1, 'level': 1, 'description': 'Integral gain.', 'min': -1000.0, 'max': 1000.0, 'srcline': 291, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'double', 'cconsttype': 'const double'}, {'name': 'd', 'type': 'double', 'default': 1.0, 'level': 1, 'description': 'Derivative gain.', 'min': -1000.0, 'max': 1000.0, 'srcline': 291, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'double', 'cconsttype': 'const double'}, {'name': 'i_clamp_min', 'type': 'double', 'default': -10.0, 'level': 1, 'description': 'Min bounds for the integral windup', 'min': -1000.0, 'max': 0.0, 'srcline': 291, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'double', 'cconsttype': 'const double'}, {'name': 'i_clamp_max', 'type': 'double', 'default': 10.0, 'level': 1, 'description': 'Max bounds for the integral windup', 'min': 0.0, 'max': 1000.0, 'srcline': 291, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'double', 'cconsttype': 'const double'}, {'name': 'antiwindup', 'type': 'bool', 'default': False, 'level': 1, 'description': 'Antiwindup.', 'min': False, 'max': True, 'srcline': 291, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'bool', 'cconsttype': 'const bool'}], 'groups': [], 'srcline': 246, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'class': 'DEFAULT', 'parentclass': '', 'parentname': 'Default', 'field': 'default', 'upper': 'DEFAULT', 'lower': 'groups'}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

