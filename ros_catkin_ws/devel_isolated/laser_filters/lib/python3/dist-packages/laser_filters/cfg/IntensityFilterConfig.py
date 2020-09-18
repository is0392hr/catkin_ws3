## *********************************************************
##
## File autogenerated for the laser_filters package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'name': 'Default', 'type': '', 'state': True, 'cstate': 'true', 'id': 0, 'parent': 0, 'parameters': [{'name': 'lower_threshold', 'type': 'double', 'default': 8000.0, 'level': 0, 'description': 'Intensity values lower than this value will be filtered', 'min': 0.0, 'max': 100000.0, 'srcline': 291, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'double', 'cconsttype': 'const double'}, {'name': 'upper_threshold', 'type': 'double', 'default': 100000.0, 'level': 0, 'description': 'Intensity values greater than this value will be filtered', 'min': 0.0, 'max': 100000.0, 'srcline': 291, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'double', 'cconsttype': 'const double'}, {'name': 'invert', 'type': 'bool', 'default': False, 'level': 0, 'description': 'A Boolean to invert the filter', 'min': False, 'max': True, 'srcline': 291, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'bool', 'cconsttype': 'const bool'}, {'name': 'filter_override_range', 'type': 'bool', 'default': True, 'level': 0, 'description': 'Whether to set the filtered laser beam ranges to NaN', 'min': False, 'max': True, 'srcline': 291, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'bool', 'cconsttype': 'const bool'}, {'name': 'filter_override_intensity', 'type': 'bool', 'default': False, 'level': 0, 'description': 'Whether to set the filtered and non-filtered laser beam intensities to 0.0 and 1.0 respectively', 'min': False, 'max': True, 'srcline': 291, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'bool', 'cconsttype': 'const bool'}], 'groups': [], 'srcline': 246, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'class': 'DEFAULT', 'parentclass': '', 'parentname': 'Default', 'field': 'default', 'upper': 'DEFAULT', 'lower': 'groups'}

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
