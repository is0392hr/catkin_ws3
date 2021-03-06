## *********************************************************
##
## File autogenerated for the compressed_image_transport package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'name': 'Default', 'type': '', 'state': True, 'cstate': 'true', 'id': 0, 'parent': 0, 'parameters': [{'name': 'format', 'type': 'str', 'default': 'jpeg', 'level': 0, 'description': 'Compression format', 'min': '', 'max': '', 'srcline': 291, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': "{'enum': [{'name': 'jpeg', 'type': 'str', 'value': 'jpeg', 'srcline': 9, 'srcfile': '/home/koki/ros_catkin_ws/src/image_transport_plugins/compressed_image_transport/cfg/CompressedPublisher.cfg', 'description': 'JPEG lossy compression', 'ctype': 'std::string', 'cconsttype': 'const char * const'}, {'name': 'png', 'type': 'str', 'value': 'png', 'srcline': 10, 'srcfile': '/home/koki/ros_catkin_ws/src/image_transport_plugins/compressed_image_transport/cfg/CompressedPublisher.cfg', 'description': 'PNG lossless compression', 'ctype': 'std::string', 'cconsttype': 'const char * const'}], 'enum_description': 'Enum to set the compression format'}", 'ctype': 'std::string', 'cconsttype': 'const char * const'}, {'name': 'jpeg_quality', 'type': 'int', 'default': 80, 'level': 0, 'description': 'JPEG quality percentile', 'min': 1, 'max': 100, 'srcline': 291, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'png_level', 'type': 'int', 'default': 9, 'level': 0, 'description': 'PNG compression level', 'min': 1, 'max': 9, 'srcline': 291, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'int', 'cconsttype': 'const int'}], 'groups': [], 'srcline': 246, 'srcfile': '/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'class': 'DEFAULT', 'parentclass': '', 'parentname': 'Default', 'field': 'default', 'upper': 'DEFAULT', 'lower': 'groups'}

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

CompressedPublisher_jpeg = 'jpeg'
CompressedPublisher_png = 'png'
