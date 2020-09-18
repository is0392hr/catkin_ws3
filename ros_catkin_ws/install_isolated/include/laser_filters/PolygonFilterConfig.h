//#line 2 "/home/koki/ros_catkin_ws/install_isolated/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"
// *********************************************************
//
// File autogenerated for the laser_filters package
// by the dynamic_reconfigure package.
// Please do not edit.
//
// ********************************************************/

#ifndef __laser_filters__POLYGONFILTERCONFIG_H__
#define __laser_filters__POLYGONFILTERCONFIG_H__

#if __cplusplus >= 201103L
#define DYNAMIC_RECONFIGURE_FINAL final
#else
#define DYNAMIC_RECONFIGURE_FINAL
#endif

#include <dynamic_reconfigure/config_tools.h>
#include <limits>
#include <ros/node_handle.h>
#include <dynamic_reconfigure/ConfigDescription.h>
#include <dynamic_reconfigure/ParamDescription.h>
#include <dynamic_reconfigure/Group.h>
#include <dynamic_reconfigure/config_init_mutex.h>
#include <boost/any.hpp>

namespace laser_filters
{
  class PolygonFilterConfigStatics;

  class PolygonFilterConfig
  {
  public:
    class AbstractParamDescription : public dynamic_reconfigure::ParamDescription
    {
    public:
      AbstractParamDescription(std::string n, std::string t, uint32_t l,
          std::string d, std::string e)
      {
        name = n;
        type = t;
        level = l;
        description = d;
        edit_method = e;
      }
      virtual ~AbstractParamDescription() = default;

      virtual void clamp(PolygonFilterConfig &config, const PolygonFilterConfig &max, const PolygonFilterConfig &min) const = 0;
      virtual void calcLevel(uint32_t &level, const PolygonFilterConfig &config1, const PolygonFilterConfig &config2) const = 0;
      virtual void fromServer(const ros::NodeHandle &nh, PolygonFilterConfig &config) const = 0;
      virtual void toServer(const ros::NodeHandle &nh, const PolygonFilterConfig &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, PolygonFilterConfig &config) const = 0;
      virtual void toMessage(dynamic_reconfigure::Config &msg, const PolygonFilterConfig &config) const = 0;
      virtual void getValue(const PolygonFilterConfig &config, boost::any &val) const = 0;
    };

    typedef boost::shared_ptr<AbstractParamDescription> AbstractParamDescriptionPtr;
    typedef boost::shared_ptr<const AbstractParamDescription> AbstractParamDescriptionConstPtr;

    // Final keyword added to class because it has virtual methods and inherits
    // from a class with a non-virtual destructor.
    template <class T>
    class ParamDescription DYNAMIC_RECONFIGURE_FINAL : public AbstractParamDescription
    {
    public:
      ParamDescription(std::string a_name, std::string a_type, uint32_t a_level,
          std::string a_description, std::string a_edit_method, T PolygonFilterConfig::* a_f) :
        AbstractParamDescription(a_name, a_type, a_level, a_description, a_edit_method),
        field(a_f)
      {}

      T PolygonFilterConfig::* field;

      virtual void clamp(PolygonFilterConfig &config, const PolygonFilterConfig &max, const PolygonFilterConfig &min) const override
      {
        if (config.*field > max.*field)
          config.*field = max.*field;

        if (config.*field < min.*field)
          config.*field = min.*field;
      }

      virtual void calcLevel(uint32_t &comb_level, const PolygonFilterConfig &config1, const PolygonFilterConfig &config2) const override
      {
        if (config1.*field != config2.*field)
          comb_level |= level;
      }

      virtual void fromServer(const ros::NodeHandle &nh, PolygonFilterConfig &config) const override
      {
        nh.getParam(name, config.*field);
      }

      virtual void toServer(const ros::NodeHandle &nh, const PolygonFilterConfig &config) const override
      {
        nh.setParam(name, config.*field);
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, PolygonFilterConfig &config) const override
      {
        return dynamic_reconfigure::ConfigTools::getParameter(msg, name, config.*field);
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const PolygonFilterConfig &config) const override
      {
        dynamic_reconfigure::ConfigTools::appendParameter(msg, name, config.*field);
      }

      virtual void getValue(const PolygonFilterConfig &config, boost::any &val) const override
      {
        val = config.*field;
      }
    };

    class AbstractGroupDescription : public dynamic_reconfigure::Group
    {
      public:
      AbstractGroupDescription(std::string n, std::string t, int p, int i, bool s)
      {
        name = n;
        type = t;
        parent = p;
        state = s;
        id = i;
      }

      virtual ~AbstractGroupDescription() = default;

      std::vector<AbstractParamDescriptionConstPtr> abstract_parameters;
      bool state;

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &config) const =0;
      virtual void updateParams(boost::any &cfg, PolygonFilterConfig &top) const= 0;
      virtual void setInitialState(boost::any &cfg) const = 0;


      void convertParams()
      {
        for(std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = abstract_parameters.begin(); i != abstract_parameters.end(); ++i)
        {
          parameters.push_back(dynamic_reconfigure::ParamDescription(**i));
        }
      }
    };

    typedef boost::shared_ptr<AbstractGroupDescription> AbstractGroupDescriptionPtr;
    typedef boost::shared_ptr<const AbstractGroupDescription> AbstractGroupDescriptionConstPtr;

    // Final keyword added to class because it has virtual methods and inherits
    // from a class with a non-virtual destructor.
    template<class T, class PT>
    class GroupDescription DYNAMIC_RECONFIGURE_FINAL : public AbstractGroupDescription
    {
    public:
      GroupDescription(std::string a_name, std::string a_type, int a_parent, int a_id, bool a_s, T PT::* a_f) : AbstractGroupDescription(a_name, a_type, a_parent, a_id, a_s), field(a_f)
      {
      }

      GroupDescription(const GroupDescription<T, PT>& g): AbstractGroupDescription(g.name, g.type, g.parent, g.id, g.state), field(g.field), groups(g.groups)
      {
        parameters = g.parameters;
        abstract_parameters = g.abstract_parameters;
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &cfg) const override
      {
        PT* config = boost::any_cast<PT*>(cfg);
        if(!dynamic_reconfigure::ConfigTools::getGroupState(msg, name, (*config).*field))
          return false;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          if(!(*i)->fromMessage(msg, n))
            return false;
        }

        return true;
      }

      virtual void setInitialState(boost::any &cfg) const override
      {
        PT* config = boost::any_cast<PT*>(cfg);
        T* group = &((*config).*field);
        group->state = state;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = boost::any(&((*config).*field));
          (*i)->setInitialState(n);
        }

      }

      virtual void updateParams(boost::any &cfg, PolygonFilterConfig &top) const override
      {
        PT* config = boost::any_cast<PT*>(cfg);

        T* f = &((*config).*field);
        f->setParams(top, abstract_parameters);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          (*i)->updateParams(n, top);
        }
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &cfg) const override
      {
        const PT config = boost::any_cast<PT>(cfg);
        dynamic_reconfigure::ConfigTools::appendGroup<T>(msg, name, id, parent, config.*field);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          (*i)->toMessage(msg, config.*field);
        }
      }

      T PT::* field;
      std::vector<PolygonFilterConfig::AbstractGroupDescriptionConstPtr> groups;
    };

class DEFAULT
{
  public:
    DEFAULT()
    {
      state = true;
      name = "Default";
    }

    void setParams(PolygonFilterConfig &config, const std::vector<AbstractParamDescriptionConstPtr> params)
    {
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator _i = params.begin(); _i != params.end(); ++_i)
      {
        boost::any val;
        (*_i)->getValue(config, val);

        if("polygon"==(*_i)->name){polygon = boost::any_cast<std::string>(val);}
        if("polygon_padding"==(*_i)->name){polygon_padding = boost::any_cast<double>(val);}
        if("invert"==(*_i)->name){invert = boost::any_cast<bool>(val);}
      }
    }

    std::string polygon;
double polygon_padding;
bool invert;

    bool state;
    std::string name;

    
}groups;



//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      std::string polygon;
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double polygon_padding;
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      bool invert;
//#line 231 "/home/koki/ros_catkin_ws/install_isolated/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

    bool __fromMessage__(dynamic_reconfigure::Config &msg)
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();

      int count = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        if ((*i)->fromMessage(msg, *this))
          count++;

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i ++)
      {
        if ((*i)->id == 0)
        {
          boost::any n = boost::any(this);
          (*i)->updateParams(n, *this);
          (*i)->fromMessage(msg, n);
        }
      }

      if (count != dynamic_reconfigure::ConfigTools::size(msg))
      {
        ROS_ERROR("PolygonFilterConfig::__fromMessage__ called with an unexpected parameter.");
        ROS_ERROR("Booleans:");
        for (unsigned int i = 0; i < msg.bools.size(); i++)
          ROS_ERROR("  %s", msg.bools[i].name.c_str());
        ROS_ERROR("Integers:");
        for (unsigned int i = 0; i < msg.ints.size(); i++)
          ROS_ERROR("  %s", msg.ints[i].name.c_str());
        ROS_ERROR("Doubles:");
        for (unsigned int i = 0; i < msg.doubles.size(); i++)
          ROS_ERROR("  %s", msg.doubles[i].name.c_str());
        ROS_ERROR("Strings:");
        for (unsigned int i = 0; i < msg.strs.size(); i++)
          ROS_ERROR("  %s", msg.strs[i].name.c_str());
        // @todo Check that there are no duplicates. Make this error more
        // explicit.
        return false;
      }
      return true;
    }

    // This version of __toMessage__ is used during initialization of
    // statics when __getParamDescriptions__ can't be called yet.
    void __toMessage__(dynamic_reconfigure::Config &msg, const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__, const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__) const
    {
      dynamic_reconfigure::ConfigTools::clear(msg);
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toMessage(msg, *this);

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        if((*i)->id == 0)
        {
          (*i)->toMessage(msg, *this);
        }
      }
    }

    void __toMessage__(dynamic_reconfigure::Config &msg) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      __toMessage__(msg, __param_descriptions__, __group_descriptions__);
    }

    void __toServer__(const ros::NodeHandle &nh) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toServer(nh, *this);
    }

    void __fromServer__(const ros::NodeHandle &nh)
    {
      static bool setup=false;

      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->fromServer(nh, *this);

      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i++){
        if (!setup && (*i)->id == 0) {
          setup = true;
          boost::any n = boost::any(this);
          (*i)->setInitialState(n);
        }
      }
    }

    void __clamp__()
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const PolygonFilterConfig &__max__ = __getMax__();
      const PolygonFilterConfig &__min__ = __getMin__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->clamp(*this, __max__, __min__);
    }

    uint32_t __level__(const PolygonFilterConfig &config) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      uint32_t level = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->calcLevel(level, config, *this);
      return level;
    }

    static const dynamic_reconfigure::ConfigDescription &__getDescriptionMessage__();
    static const PolygonFilterConfig &__getDefault__();
    static const PolygonFilterConfig &__getMax__();
    static const PolygonFilterConfig &__getMin__();
    static const std::vector<AbstractParamDescriptionConstPtr> &__getParamDescriptions__();
    static const std::vector<AbstractGroupDescriptionConstPtr> &__getGroupDescriptions__();

  private:
    static const PolygonFilterConfigStatics *__get_statics__();
  };

  template <> // Max and min are ignored for strings.
  inline void PolygonFilterConfig::ParamDescription<std::string>::clamp(PolygonFilterConfig &config, const PolygonFilterConfig &max, const PolygonFilterConfig &min) const
  {
    (void) config;
    (void) min;
    (void) max;
    return;
  }

  class PolygonFilterConfigStatics
  {
    friend class PolygonFilterConfig;

    PolygonFilterConfigStatics()
    {
PolygonFilterConfig::GroupDescription<PolygonFilterConfig::DEFAULT, PolygonFilterConfig> Default("Default", "", 0, 0, true, &PolygonFilterConfig::groups);
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.polygon = "";
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.polygon = "";
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.polygon = "[]";
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(PolygonFilterConfig::AbstractParamDescriptionConstPtr(new PolygonFilterConfig::ParamDescription<std::string>("polygon", "str", 0, "A list of coordinates that represents a polygon in the format [ [x1, y1], [x2, y2], ..., [xn, yn] ]", "", &PolygonFilterConfig::polygon)));
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(PolygonFilterConfig::AbstractParamDescriptionConstPtr(new PolygonFilterConfig::ParamDescription<std::string>("polygon", "str", 0, "A list of coordinates that represents a polygon in the format [ [x1, y1], [x2, y2], ..., [xn, yn] ]", "", &PolygonFilterConfig::polygon)));
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.polygon_padding = 0.0;
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.polygon_padding = 100.0;
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.polygon_padding = 0.0;
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(PolygonFilterConfig::AbstractParamDescriptionConstPtr(new PolygonFilterConfig::ParamDescription<double>("polygon_padding", "double", 0, "Polygon padding in meters", "", &PolygonFilterConfig::polygon_padding)));
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(PolygonFilterConfig::AbstractParamDescriptionConstPtr(new PolygonFilterConfig::ParamDescription<double>("polygon_padding", "double", 0, "Polygon padding in meters", "", &PolygonFilterConfig::polygon_padding)));
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.invert = 0;
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.invert = 1;
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.invert = 0;
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(PolygonFilterConfig::AbstractParamDescriptionConstPtr(new PolygonFilterConfig::ParamDescription<bool>("invert", "bool", 0, "A Boolean to invert the filter", "", &PolygonFilterConfig::invert)));
//#line 291 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(PolygonFilterConfig::AbstractParamDescriptionConstPtr(new PolygonFilterConfig::ParamDescription<bool>("invert", "bool", 0, "A Boolean to invert the filter", "", &PolygonFilterConfig::invert)));
//#line 246 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.convertParams();
//#line 246 "/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __group_descriptions__.push_back(PolygonFilterConfig::AbstractGroupDescriptionConstPtr(new PolygonFilterConfig::GroupDescription<PolygonFilterConfig::DEFAULT, PolygonFilterConfig>(Default)));
//#line 369 "/home/koki/ros_catkin_ws/install_isolated/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

      for (std::vector<PolygonFilterConfig::AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        __description_message__.groups.push_back(**i);
      }
      __max__.__toMessage__(__description_message__.max, __param_descriptions__, __group_descriptions__);
      __min__.__toMessage__(__description_message__.min, __param_descriptions__, __group_descriptions__);
      __default__.__toMessage__(__description_message__.dflt, __param_descriptions__, __group_descriptions__);
    }
    std::vector<PolygonFilterConfig::AbstractParamDescriptionConstPtr> __param_descriptions__;
    std::vector<PolygonFilterConfig::AbstractGroupDescriptionConstPtr> __group_descriptions__;
    PolygonFilterConfig __max__;
    PolygonFilterConfig __min__;
    PolygonFilterConfig __default__;
    dynamic_reconfigure::ConfigDescription __description_message__;

    static const PolygonFilterConfigStatics *get_instance()
    {
      // Split this off in a separate function because I know that
      // instance will get initialized the first time get_instance is
      // called, and I am guaranteeing that get_instance gets called at
      // most once.
      static PolygonFilterConfigStatics instance;
      return &instance;
    }
  };

  inline const dynamic_reconfigure::ConfigDescription &PolygonFilterConfig::__getDescriptionMessage__()
  {
    return __get_statics__()->__description_message__;
  }

  inline const PolygonFilterConfig &PolygonFilterConfig::__getDefault__()
  {
    return __get_statics__()->__default__;
  }

  inline const PolygonFilterConfig &PolygonFilterConfig::__getMax__()
  {
    return __get_statics__()->__max__;
  }

  inline const PolygonFilterConfig &PolygonFilterConfig::__getMin__()
  {
    return __get_statics__()->__min__;
  }

  inline const std::vector<PolygonFilterConfig::AbstractParamDescriptionConstPtr> &PolygonFilterConfig::__getParamDescriptions__()
  {
    return __get_statics__()->__param_descriptions__;
  }

  inline const std::vector<PolygonFilterConfig::AbstractGroupDescriptionConstPtr> &PolygonFilterConfig::__getGroupDescriptions__()
  {
    return __get_statics__()->__group_descriptions__;
  }

  inline const PolygonFilterConfigStatics *PolygonFilterConfig::__get_statics__()
  {
    const static PolygonFilterConfigStatics *statics;

    if (statics) // Common case
      return statics;

    boost::mutex::scoped_lock lock(dynamic_reconfigure::__init_mutex__);

    if (statics) // In case we lost a race.
      return statics;

    statics = PolygonFilterConfigStatics::get_instance();

    return statics;
  }


}

#undef DYNAMIC_RECONFIGURE_FINAL

#endif // __POLYGONFILTERRECONFIGURATOR_H__
