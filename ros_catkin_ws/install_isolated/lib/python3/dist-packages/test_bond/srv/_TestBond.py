# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from test_bond/TestBondRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy

class TestBondRequest(genpy.Message):
  _md5sum = "1c7d43df2e371719140975f9c404a8bb"
  _type = "test_bond/TestBondRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """string topic
string id
duration delay_connect
duration delay_death
bool inhibit_death
bool inhibit_death_message
"""
  __slots__ = ['topic','id','delay_connect','delay_death','inhibit_death','inhibit_death_message']
  _slot_types = ['string','string','duration','duration','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       topic,id,delay_connect,delay_death,inhibit_death,inhibit_death_message

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(TestBondRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.topic is None:
        self.topic = ''
      if self.id is None:
        self.id = ''
      if self.delay_connect is None:
        self.delay_connect = genpy.Duration()
      if self.delay_death is None:
        self.delay_death = genpy.Duration()
      if self.inhibit_death is None:
        self.inhibit_death = False
      if self.inhibit_death_message is None:
        self.inhibit_death_message = False
    else:
      self.topic = ''
      self.id = ''
      self.delay_connect = genpy.Duration()
      self.delay_death = genpy.Duration()
      self.inhibit_death = False
      self.inhibit_death_message = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.topic
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_4i2B().pack(_x.delay_connect.secs, _x.delay_connect.nsecs, _x.delay_death.secs, _x.delay_death.nsecs, _x.inhibit_death, _x.inhibit_death_message))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.delay_connect is None:
        self.delay_connect = genpy.Duration()
      if self.delay_death is None:
        self.delay_death = genpy.Duration()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.topic = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.topic = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.id = str[start:end]
      _x = self
      start = end
      end += 18
      (_x.delay_connect.secs, _x.delay_connect.nsecs, _x.delay_death.secs, _x.delay_death.nsecs, _x.inhibit_death, _x.inhibit_death_message,) = _get_struct_4i2B().unpack(str[start:end])
      self.inhibit_death = bool(self.inhibit_death)
      self.inhibit_death_message = bool(self.inhibit_death_message)
      self.delay_connect.canon()
      self.delay_death.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.topic
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_4i2B().pack(_x.delay_connect.secs, _x.delay_connect.nsecs, _x.delay_death.secs, _x.delay_death.nsecs, _x.inhibit_death, _x.inhibit_death_message))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.delay_connect is None:
        self.delay_connect = genpy.Duration()
      if self.delay_death is None:
        self.delay_death = genpy.Duration()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.topic = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.topic = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.id = str[start:end]
      _x = self
      start = end
      end += 18
      (_x.delay_connect.secs, _x.delay_connect.nsecs, _x.delay_death.secs, _x.delay_death.nsecs, _x.inhibit_death, _x.inhibit_death_message,) = _get_struct_4i2B().unpack(str[start:end])
      self.inhibit_death = bool(self.inhibit_death)
      self.inhibit_death_message = bool(self.inhibit_death_message)
      self.delay_connect.canon()
      self.delay_death.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4i2B = None
def _get_struct_4i2B():
    global _struct_4i2B
    if _struct_4i2B is None:
        _struct_4i2B = struct.Struct("<4i2B")
    return _struct_4i2B
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from test_bond/TestBondResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class TestBondResponse(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "test_bond/TestBondResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(TestBondResponse, self).__init__(*args, **kwds)

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
class TestBond(object):
  _type          = 'test_bond/TestBond'
  _md5sum = '1c7d43df2e371719140975f9c404a8bb'
  _request_class  = TestBondRequest
  _response_class = TestBondResponse